/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.EmptyStateView : UIView {

	 imageView;
	 primaryLabel;
	 secondaryLabel;
	 button;
	 disabled;
	 imageType;
	 addFriendsHandler;

}

@property (copy,nonatomic) id addFriendsHandler; 
+(id)addAdditionalFriendsEmptyStateView;
+(id)addFriendsEmptyStateView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)addFriendsHandler;
-(void)didTapButton:(id)arg1 ;
-(void)layoutSubviews;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)setAddFriendsHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

