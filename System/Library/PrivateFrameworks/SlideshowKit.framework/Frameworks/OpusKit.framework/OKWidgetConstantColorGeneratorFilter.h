/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>

@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter {

	CIColor* _inputColor;

}

@property (nonatomic,retain) CIColor * inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
-(CIColor *)inputColor;
-(id)inputKeys;
-(void)setSettingInputColor:(id)arg1 ;
@end
