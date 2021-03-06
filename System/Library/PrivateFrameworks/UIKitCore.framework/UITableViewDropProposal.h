/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDropProposal.h>

@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal {

	long long _intent;
	NSIndexPath* _adjustedTargetIndexPath;

}

@property (assign,nonatomic) long long intent;                                                                                                       //@synthesize intent=_intent - In the implementation block
@property (setter=_setAdjustedTargetIndexPath:,getter=_adjustedTargetIndexPath,nonatomic,retain) NSIndexPath * adjustedTargetIndexPath;              //@synthesize adjustedTargetIndexPath=_adjustedTargetIndexPath - In the implementation block
@property (nonatomic,readonly) long long _dropLocation; 
-(id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3 ;
-(void)setIntent:(long long)arg1 ;
-(long long)intent;
-(long long)_dropAction;
-(long long)_dropLocation;
-(id)_adjustedTargetIndexPath;
-(void)_setAdjustedTargetIndexPath:(id)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
@end

