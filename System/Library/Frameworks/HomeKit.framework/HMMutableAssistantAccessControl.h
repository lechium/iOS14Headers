/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(void)addAccessory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)options;
-(NSArray *)accessories;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
@end
