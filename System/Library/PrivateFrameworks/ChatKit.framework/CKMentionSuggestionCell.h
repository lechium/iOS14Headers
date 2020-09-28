/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKEntity, CKLabel, CKAvatarView;

@interface CKMentionSuggestionCell : UICollectionViewCell {

	CKEntity* _suggestedEntity;
	CKLabel* _handleLabel;
	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKLabel * handleLabel;                   //@synthesize handleLabel=_handleLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CKEntity * suggestedEntity;              //@synthesize suggestedEntity=_suggestedEntity - In the implementation block
+(id)reuseIdentifier;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(CKAvatarView *)avatarView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKLabel *)handleLabel;
-(void)setHandleLabel:(CKLabel *)arg1 ;
-(void)setSuggestedEntity:(CKEntity *)arg1 ;
-(CKEntity *)suggestedEntity;
@end
