/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(void)appendCGFloat:(double)arg1 ;
-(void)appendFloat:(float)arg1 ;
-(void)appendObject:(id)arg1 ;
-(id)init;
-(void)appendCGRect:(CGRect)arg1 ;
-(void)appendBool:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)appendDouble:(double)arg1 ;
-(void)appendFloat2:;
-(unsigned long long)hashForFloat:(float)arg1 ;
-(unsigned long long)hashForCGFloat:(double)arg1 ;
-(unsigned long long)hashForNSTimeInterval:(double)arg1 ;
-(unsigned long long)hashForDouble:(double)arg1 ;
-(void)appendFloat4:;
-(void)appendUnsignedInt:(unsigned long long)arg1 ;
-(void)appendInt:(long long)arg1 ;
-(void)appendTimeInterval:(double)arg1 ;
-(void)appendFloat4x4:(SCD_Struct_AR2)arg1 ;
@end
