/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IAMMessageTarget <NSObject>
@property (nonatomic,readonly) NSString * targetIdentifier; 
@required
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
-(NSString *)targetIdentifier;

@end
