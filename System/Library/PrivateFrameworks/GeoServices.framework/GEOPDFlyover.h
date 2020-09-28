/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDCameraPathFrame* _cameraPaths;
	unsigned long long _cameraPathsCount;
	unsigned long long _cameraPathsSpace;
	GEOPDLabelFrame* _labelFrames;
	unsigned long long _labelFramesCount;
	unsigned long long _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _useSplines;
	struct {
		unsigned has_useSplines : 1;
		unsigned read_cameraPaths : 1;
		unsigned read_labelFrames : 1;
		unsigned read_labels : 1;
		unsigned read_notificationMessages : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long cameraPathsCount; 
@property (nonatomic,readonly) GEOPDCameraPathFrame* cameraPaths; 
@property (assign,nonatomic) BOOL hasUseSplines; 
@property (assign,nonatomic) BOOL useSplines; 
@property (nonatomic,readonly) unsigned long long labelFramesCount; 
@property (nonatomic,readonly) GEOPDLabelFrame* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels; 
@property (nonatomic,retain) NSMutableArray * notificationMessages; 
+(Class)notificationMessageType;
+(id)flyoverForPlaceData:(id)arg1 ;
+(Class)labelType;
+(BOOL)isValid:(id)arg1 ;
-(void)setCameraPaths:(GEOPDCameraPathFrame*)arg1 count:(unsigned long long)arg2 ;
-(void)addNotificationMessage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabelFrames:(GEOPDLabelFrame*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasUseSplines;
-(BOOL)useSplines;
-(void)dealloc;
-(id)jsonRepresentation;
-(NSMutableArray *)labels;
-(void)addLabel:(id)arg1 ;
-(void)clearNotificationMessages;
-(unsigned long long)labelsCount;
-(void)setUseSplines:(BOOL)arg1 ;
-(unsigned long long)labelFramesCount;
-(GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cameraPathsCount;
-(id)bestLocalizedLabelAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(GEOPDLabelFrame*)labelFrames;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(void)clearLabelFrames;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)notificationMessagesCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCameraPath:(GEOPDCameraPathFrame)arg1 ;
-(void)clearCameraPaths;
-(id)bestLocalizedAnnouncementMessage;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)notificationMessages;
-(void)addLabelFrame:(GEOPDLabelFrame)arg1 ;
-(void)clearLabels;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(GEOPDCameraPathFrame*)cameraPaths;
-(GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(id)description;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
@end
