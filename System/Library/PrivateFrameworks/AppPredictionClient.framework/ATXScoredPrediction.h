/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding> {

	float _score;
	id _predictedItem;

}

@property (nonatomic,readonly) id predictedItem;              //@synthesize predictedItem=_predictedItem - In the implementation block
@property (nonatomic,readonly) float score;                   //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionsFrom:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predictedItem;
-(float)score;
-(void)setScore:(float)arg1 ;
-(id)initWithPredictedItem:(id)arg1 score:(float)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 score:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToScoredPredictionItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

