/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _stopAtFirstPyramidWith2DCode;
	NSArray* _symbologies;
	NSString* _locateMode;

}

@property (nonatomic,copy) NSArray * symbologies;                            //@synthesize symbologies=_symbologies - In the implementation block
@property (nonatomic,copy) NSString * locateMode;                            //@synthesize locateMode=_locateMode - In the implementation block
@property (assign,nonatomic) BOOL stopAtFirstPyramidWith2DCode;              //@synthesize stopAtFirstPyramidWith2DCode=_stopAtFirstPyramidWith2DCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locateMode;
-(void)setSymbologies:(NSArray *)arg1 ;
-(void)setLocateMode:(NSString *)arg1 ;
-(BOOL)stopAtFirstPyramidWith2DCode;
-(void)setStopAtFirstPyramidWith2DCode:(BOOL)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(NSArray *)symbologies;
@end
