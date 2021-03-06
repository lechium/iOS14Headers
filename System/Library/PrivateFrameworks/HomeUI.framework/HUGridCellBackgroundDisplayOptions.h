/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	unsigned long long _contentColorStyle;
	NSString* _contentSizeCategory;
	unsigned long long _displayStyle;

}

@property (assign,nonatomic) unsigned long long displayStyle;                   //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) double gutter; 
@property (assign,nonatomic) unsigned long long contentColorStyle;              //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
@property (assign,nonatomic) NSString * contentSizeCategory;                    //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(double)gutter;
-(NSString *)contentSizeCategory;
-(unsigned long long)contentColorStyle;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
@end

