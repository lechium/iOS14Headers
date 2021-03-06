/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface NCKeyLineView : UIImageView {

	double _cornerRadius;
	double _lineWidth;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(double)cornerRadius;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2 ;
-(void)setKeyLineViewAlphaForProgress:(double)arg1 ;
@end

