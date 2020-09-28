/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUSubjectDetectionResult.h>

@class NSArray, NSString;

@interface _NUSubjectDetectionResult : _NURenderResult <NUSubjectDetectionResult> {

	NSArray* _observations;

}

@property (nonatomic,copy,readonly) NSArray * observations;              //@synthesize observations=_observations - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observations;
-(id)initWithObservations:(id)arg1 ;
@end
