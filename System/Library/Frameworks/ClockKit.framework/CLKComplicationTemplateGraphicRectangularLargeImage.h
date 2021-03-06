/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeImage : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	CLKFullColorImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;                         //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
-(CLKFullColorImageProvider *)imageProvider;
-(CLKTextProvider *)textProvider;
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
@end

