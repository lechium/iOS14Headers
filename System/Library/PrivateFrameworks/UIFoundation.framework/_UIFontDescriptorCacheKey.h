/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class UIFontDescriptor, NSString;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	UIFontDescriptor* _fontDescriptor;
	double _pointSize;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}

@property (nonatomic,copy) UIFontDescriptor * fontDescriptor;                  //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (assign,nonatomic) double pointSize;                                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,copy) NSString * textStyleForScaling;                     //@synthesize textStyleForScaling=_textStyleForScaling - In the implementation block
@property (assign,nonatomic) double pointSizeForScaling;                       //@synthesize pointSizeForScaling=_pointSizeForScaling - In the implementation block
@property (assign,nonatomic) double maximumPointSizeAfterScaling;              //@synthesize maximumPointSizeAfterScaling=_maximumPointSizeAfterScaling - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;                              //@synthesize textLegibility=_textLegibility - In the implementation block
-(void)setPointSize:(double)arg1 ;
-(unsigned long long)_hash;
-(double)pointSizeForScaling;
-(void)dealloc;
-(void)setFontDescriptor:(UIFontDescriptor *)arg1 ;
-(NSString *)textStyleForScaling;
-(double)pointSize;
-(void)setMaximumPointSizeAfterScaling:(double)arg1 ;
-(void)setTextStyleForScaling:(NSString *)arg1 ;
-(void)setPointSizeForScaling:(double)arg1 ;
-(double)maximumPointSizeAfterScaling;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(id)description;
-(BOOL)textLegibility;
-(UIFontDescriptor *)fontDescriptor;
@end

