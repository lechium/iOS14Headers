/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKit/CARPrototypePref.h>

@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic,readonly) BOOL invertValueForState; 
@property (nonatomic,readonly) BOOL valueBool; 
@property (nonatomic,readonly) BOOL cachedValueBool; 
+(id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(BOOL)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
-(BOOL)cachedState;
-(void)setState:(BOOL)arg1 ;
-(BOOL)invertValueForState;
-(BOOL)cachedValueBool;
-(void)setCachedState:(BOOL)arg1 ;
-(BOOL)state;
-(BOOL)valueBool;
-(id)description;
@end
