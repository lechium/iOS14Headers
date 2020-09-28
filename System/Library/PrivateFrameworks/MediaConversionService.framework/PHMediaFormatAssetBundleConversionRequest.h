/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	NSArray* _subrequests;

}

@property (retain) NSArray * subrequests;              //@synthesize subrequests=_subrequests - In the implementation block
-(id)outputFileType;
-(id)outputPathExtension;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)requiresMetadataChanges;
-(BOOL)requiresFormatConversion;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(NSArray *)subrequests;
-(void)setSubrequests:(NSArray *)arg1 ;
@end
