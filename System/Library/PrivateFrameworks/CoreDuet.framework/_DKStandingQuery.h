/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _DKStandingQuery
@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
@required
-(void)setActivity:(id)arg1;
-(void)executeWithStorage:(id)arg1;
-(void)setQueryIdentifier:(id)arg1;
-(id)fetchResult;
-(NSObject*<OS_xpc_object>)activity;
-(NSString *)queryIdentifier;

@end
