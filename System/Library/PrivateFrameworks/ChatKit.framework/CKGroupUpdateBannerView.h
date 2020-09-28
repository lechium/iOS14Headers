/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKUpdateBannerView.h>

@class NSArray;

@interface CKGroupUpdateBannerView : CKUpdateBannerView {

	NSArray* _groupUpdates;
	unsigned long long _updateBannerType;

}

@property (nonatomic,retain) NSArray * groupUpdates;                           //@synthesize groupUpdates=_groupUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long updateBannerType;              //@synthesize updateBannerType=_updateBannerType - In the implementation block
-(UIEdgeInsets)layoutMargins;
-(unsigned long long)updateBannerType;
-(NSArray *)groupUpdates;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 useNamedTitles:(BOOL)arg3 updates:(id)arg4 inUpdatesMode:(BOOL)arg5 ;
-(void)setUpdateBannerType:(unsigned long long)arg1 ;
-(void)_updateTitleLabel;
-(void)setGroupUpdates:(NSArray *)arg1 ;
-(id)getContactDisplayName:(id)arg1 ;
-(id)cancelGlyph;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_updateSubtitleLabel;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(double)titleLabelAlignmentX;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAvatarView;
@end
