/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXCollectionContentDisplay <SXContentDisplay>
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) SXConvertibleValue gutter; 
@property (nonatomic,readonly) SXConvertibleValue rowSpacing; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long distribution; 
@property (nonatomic,readonly) unsigned long long widows; 
@property (nonatomic,readonly) BOOL variableSizing; 
@required
-(SXConvertibleValue)minimumWidth;
-(SXConvertibleValue)gutter;
-(unsigned long long)widows;
-(unsigned long long)alignment;
-(SXConvertibleValue)maximumWidth;
-(SXConvertibleValue)rowSpacing;
-(unsigned long long)distribution;
-(BOOL)variableSizing;

@end

