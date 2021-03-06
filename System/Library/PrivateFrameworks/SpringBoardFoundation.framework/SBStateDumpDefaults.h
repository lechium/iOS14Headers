/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBStateDumpDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isRemoteDumpEnabled,nonatomic) BOOL remoteDumpEnabled; 
@property (nonatomic,retain) NSNumber * remoteDumpTimeout; 
-(void)setRemoteDumpTimeout:(NSNumber *)arg1 ;
-(NSNumber *)remoteDumpTimeout;
-(void)setRemoteDumpEnabled:(BOOL)arg1 ;
-(BOOL)isRemoteDumpEnabled;
-(void)_bindAndRegisterDefaults;
@end

