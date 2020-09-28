/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(id)_titleLabel;
-(void)setExpired:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(double)rowHeight;
-(id)_subtitleLabel;
-(id)_trustedLabel;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(id)_certificateImage;
-(id)_notTrustedGradient;
@end
