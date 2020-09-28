/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTextItemContainer.h>
@class NSArray;


@protocol GEOTextItemContainer
@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig; 
@property (nonatomic,readonly) NSArray * textItems; 
@required
-(NSArray *)textItems;
-(id<GEOTextItemDisplayConfig>)displayConfig;

@end


@protocol GEOTextItemDisplayConfig;
@class NSArray;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer> {

	id<GEOTextItemDisplayConfig> _displayConfig;
	NSArray* _textItems;

}

@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig;              //@synthesize displayConfig=_displayConfig - In the implementation block
@property (nonatomic,readonly) NSArray * textItems;                                     //@synthesize textItems=_textItems - In the implementation block
-(id)initWithTextItemContainer:(id)arg1 ;
-(id)init;
-(NSArray *)textItems;
-(id<GEOTextItemDisplayConfig>)displayConfig;
-(id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2 ;
@end
