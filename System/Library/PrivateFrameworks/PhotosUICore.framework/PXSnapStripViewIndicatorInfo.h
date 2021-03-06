/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject {

	BOOL _disabled;
	UIColor* _color;
	double _offset;
	unsigned long long _style;

}

@property (nonatomic,readonly) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double offset;                         //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(unsigned long long)style;
-(double)offset;
-(id)init;
-(id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3 ;
-(BOOL)isEqualToIndicatorInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)color;
-(unsigned long long)hash;
@end

