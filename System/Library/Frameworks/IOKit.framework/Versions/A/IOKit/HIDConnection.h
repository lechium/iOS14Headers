/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOKit/IOKit-Structs.h>
@class NSString;

@interface HIDConnection : NSObject {

	SCD_Struct_HI11* _connection;

}

@property (readonly) NSString * uuid; 
-(NSString *)uuid;
-(unsigned long long)_cfTypeID;
-(void)dealloc;
-(id)description;
@end

