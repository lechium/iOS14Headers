/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIDragInteractionContext <UIInteractionContext>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (nonatomic,readonly) id animations; 
@property (nonatomic,readonly) id completion; 
@required
-(NSArray *)items;
-(BOOL)shouldAnimateLift;
-(id)animations;
-(id)completion;
-(long long)state;

@end
