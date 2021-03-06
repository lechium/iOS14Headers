/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class USOSerializedGraph;

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding> {

	USOSerializedGraph* _entity;
	double _score;

}

@property (nonatomic,retain) USOSerializedGraph * entity;              //@synthesize entity=_entity - In the implementation block
@property (assign) double score;                                       //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEntity:(USOSerializedGraph *)arg1 ;
-(USOSerializedGraph *)entity;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithEntity:(id)arg1 score:(double)arg2 ;
@end

