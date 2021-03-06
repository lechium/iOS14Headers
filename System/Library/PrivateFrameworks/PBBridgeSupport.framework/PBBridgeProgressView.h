/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	double _currentProgress;
	UIImageView* _appleLogo;
	unsigned long long _style;
	unsigned long long _version;

}

@property (nonatomic,retain) UIImageView * appleLogo;                 //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned long long style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double currentProgress;                  //@synthesize currentProgress=_currentProgress - In the implementation block
-(unsigned long long)version;
-(CGSize)_size;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)layoutSubviews;
-(double)currentProgress;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(double)_tickLength;
-(id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2 ;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end

