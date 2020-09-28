/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKWorkoutRoute, NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject {

	HKWorkoutRoute* _route;
	NSFileHandle* _fileHandle;
	NSISO8601DateFormatter* _isoFormatter;
	BOOL _isFinished;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
+(id)fileNameForRoute:(id)arg1 ;
+(id)_displayNameForRoute:(id)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
-(BOOL)isFinished;
-(BOOL)_appendGPXHeaderWithError:(id*)arg1 ;
-(id)_trackpointEntryForLocation:(id)arg1 ;
-(BOOL)_appendString:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 route:(id)arg2 ;
-(BOOL)appendLocations:(id)arg1 error:(id*)arg2 ;
-(NSURL *)URL;
@end
