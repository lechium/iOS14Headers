/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _CKAcknowledgmentVoteCountView : UIView {

	UILabel* _voteCountLabel;
	UIImageView* _ackIconImageView;

}

@property (nonatomic,retain) UILabel * voteCountLabel;                    //@synthesize voteCountLabel=_voteCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * ackIconImageView;              //@synthesize ackIconImageView=_ackIconImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setVoteCountLabel:(UILabel *)arg1 ;
-(UILabel *)voteCountLabel;
-(void)setAckIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)ackIconImageView;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
@end

