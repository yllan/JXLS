//
//  DHFormat.h
//  JXLS
//
//  Created by David Hoerl on 10/7/08.
//  Copyright 2008-2013 David Hoerl. All rights reserved.
//

@interface DHFormat : NSObject

-(instancetype)initWithFormat:(void *)ft;	// xlslib_core::CFormat *
-(void *)format;

@end