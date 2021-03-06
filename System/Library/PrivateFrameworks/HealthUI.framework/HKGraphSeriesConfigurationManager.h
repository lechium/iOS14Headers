/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject {

	NSMutableDictionary* _zoomLevelConfigurationManagers;

}
-(void)reset;
-(id)init;
-(id)allDisplayTypes;
-(void)removeConfigurationsForDisplayType:(id)arg1 ;
-(id)configurationForDisplayType:(id)arg1 zoom:(long long)arg2 ;
-(void)addConfiguration:(id)arg1 zoom:(long long)arg2 ;
-(id)allDisplayTypesForZoom:(long long)arg1 ;
-(id)configurationForGraphSeries:(id)arg1 zoom:(long long)arg2 ;
-(id)allGraphSeriesForZoom:(long long)arg1 ;
-(long long)_zoomLevelForGraphZoom:(long long)arg1 ;
-(id)_configurationManagerForZoom:(long long)arg1 ;
@end

