/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PRXLabel, UIActivityIndicatorView, NSLayoutConstraint;

@interface PRXActivityStatusView : UIView {

	PRXLabel* _statusLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _activityIndicatorVerticalConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * activityIndicatorVerticalConstraint;              //@synthesize activityIndicatorVerticalConstraint=_activityIndicatorVerticalConstraint - In the implementation block
@property (nonatomic,readonly) PRXLabel * statusLabel;                                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PRXLabel *)statusLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(NSLayoutConstraint *)activityIndicatorVerticalConstraint;
@end
