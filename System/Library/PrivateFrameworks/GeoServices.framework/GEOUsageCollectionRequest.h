/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOABExperimentAssignment;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _abExperimentAssignments;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	NSMutableArray* _timeToLeaveHypothesisFeedbackCollections;
	NSMutableArray* _timeToLeaveInitialTravelTimeFeedbackCollections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abExperimentAssignments : 1;
		unsigned read_tilesAbExperimentAssignment : 1;
		unsigned read_timeToLeaveHypothesisFeedbackCollections : 1;
		unsigned read_timeToLeaveInitialTravelTimeFeedbackCollections : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * abExperimentAssignments; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveHypothesisFeedbackCollections; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveInitialTravelTimeFeedbackCollections; 
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment; 
+(BOOL)isValid:(id)arg1 ;
+(Class)abExperimentAssignmentType;
+(Class)timeToLeaveHypothesisFeedbackCollectionType;
+(Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(id)init;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(void)clearAbExperimentAssignments;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(unsigned long long)abExperimentAssignmentsCount;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(NSMutableArray *)abExperimentAssignments;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(id)description;
-(id)dictionaryRepresentation;
@end

