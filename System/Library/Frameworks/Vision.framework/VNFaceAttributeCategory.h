/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class VNClassificationObservation, NSArray;

@interface VNFaceAttributeCategory : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	VNClassificationObservation* _mostLikelyLabel;
	NSArray* _allLabelsWithConfidences;
	unsigned long long _requestRevision;

}

@property (nonatomic,copy) VNClassificationObservation * label;                 //@synthesize mostLikelyLabel=_mostLikelyLabel - In the implementation block
@property (nonatomic,copy) NSArray * allLabelsWithConfidences;                  //@synthesize allLabelsWithConfidences=_allLabelsWithConfidences - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allLabelsWithConfidences;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(void)setLabel:(VNClassificationObservation *)arg1 ;
-(void)_computeLabel;
-(VNClassificationObservation *)label;
-(unsigned long long)hash;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(void)setAllLabelsWithConfidences:(NSArray *)arg1 ;
@end
