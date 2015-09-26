        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanBrace_DOT3" ofType:@"bmp"];                                           
        if(fileName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBrace_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, fanBrace_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           fileName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanBrace" ofType:@"png"];                                                
        if(fileName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBrace_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, fanBrace_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           fileName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/fanBrace/fanBrace_DOT3.bmp",          fanBrace_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/fanBrace/fanBrace.png",               fanBrace_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "fanBrace.cpp"                                                                                                         
        glGenBuffers(1,              &fanBrace_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, fanBrace_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(fanBrace), fanBrace, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "fanBrace_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &fanBrace_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, fanBrace_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(fanBrace_INDICES), fanBrace_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        fanBrace_boundingBox[0] = -0.850145;
        fanBrace_boundingBox[1] = 0.850146;
        fanBrace_boundingBox[2] = 0.208965;
        fanBrace_boundingBox[3] = 0.238526;
        fanBrace_boundingBox[4] = -0.850147;
        fanBrace_boundingBox[5] = 0.850146;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.850145;
        collisionBoxArray[boxCount][1] = 0.850146;
        collisionBoxArray[boxCount][2] = 0.208965;
        collisionBoxArray[boxCount][3] = 0.238526;
        collisionBoxArray[boxCount][4] = -0.850147;
        collisionBoxArray[boxCount][5] = 0.850146;
        collisionBoxArray[boxCount][6] = boxCount;
        boxCount++;
