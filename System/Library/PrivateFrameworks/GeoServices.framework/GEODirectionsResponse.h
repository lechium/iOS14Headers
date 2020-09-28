/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/_GEOEnrouteNoticesProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOClientMetrics, NSString, GEOPDDatasetABStatus, GEOTransitDecoderData, NSData, GEORouteDisplayHints, GEOETAServiceResponseSummary, GEOAlert, GEOSnapScoreMetadata, GEOStyleAttributes, GEOPBTransitRoutingIncidentMessage, GEOTransitRouteUpdateConfiguration;

@interface GEODirectionsResponse : PBCodable <GEOCompanionCompatibility, _GEOEnrouteNoticesProvider, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	SCD_Struct_GE90* _supportedTransportTypes;
	GEOTimepoint _timepointUsed;
	NSMutableArray* _arrivalParameters;
	GEOClientMetrics* _clientMetrics;
	NSString* _dataVersion;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugLatencyMs;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOAlert* _failureAlert;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	NSData* _nonRecommendedRoutesCache;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	NSMutableArray* _serviceGaps;
	NSString* _serviceVersion;
	NSData* _sessionState;
	GEOSnapScoreMetadata* _snapScoreMetadataDebug;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSMutableArray* _trafficCameras;
	NSMutableArray* _trafficSignals;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	GEOTransitRouteUpdateConfiguration* _transitRouteUpdateConfiguration;
	NSMutableArray* _waypointRoutes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _instructionSignFillColor;
	int _liveRouteSavingsSeconds;
	int _localDistanceUnits;
	unsigned _selectedRouteIndex;
	int _status;
	BOOL _hasKhSegments;
	BOOL _isNavigable;
	BOOL _isOfflineResponse;
	BOOL _routeDeviatesFromOriginal;
	struct {
		unsigned has_timepointUsed : 1;
		unsigned has_debugLatencyMs : 1;
		unsigned has_instructionSignFillColor : 1;
		unsigned has_liveRouteSavingsSeconds : 1;
		unsigned has_localDistanceUnits : 1;
		unsigned has_selectedRouteIndex : 1;
		unsigned has_hasKhSegments : 1;
		unsigned has_isNavigable : 1;
		unsigned has_isOfflineResponse : 1;
		unsigned has_routeDeviatesFromOriginal : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_supportedTransportTypes : 1;
		unsigned read_arrivalParameters : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_dataVersion : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_decoderData : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_displayHints : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_failureAlert : 1;
		unsigned read_incidentsOffRoutes : 1;
		unsigned read_incidentsOnRoutes : 1;
		unsigned read_nonRecommendedRoutesCache : 1;
		unsigned read_placeSearchResponses : 1;
		unsigned read_routes : 1;
		unsigned read_serviceGaps : 1;
		unsigned read_serviceVersion : 1;
		unsigned read_sessionState : 1;
		unsigned read_snapScoreMetadataDebug : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_suggestedRoutes : 1;
		unsigned read_trafficCameras : 1;
		unsigned read_trafficSignals : 1;
		unsigned read_transitDataVersion : 1;
		unsigned read_transitIncidentMessage : 1;
		unsigned read_transitRouteUpdateConfiguration : 1;
		unsigned read_waypointRoutes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,retain) NSMutableArray * waypointRoutes; 
@property (nonatomic,retain) NSMutableArray * placeSearchResponses; 
@property (assign,nonatomic) BOOL hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits; 
@property (assign,nonatomic) BOOL hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) BOOL routeDeviatesFromOriginal; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) BOOL hasIsNavigable; 
@property (assign,nonatomic) BOOL isNavigable; 
@property (assign,nonatomic) BOOL hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor; 
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes; 
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (nonatomic,retain) NSMutableArray * serviceGaps; 
@property (assign,nonatomic) BOOL hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex; 
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasFailureAlert; 
@property (nonatomic,retain) GEOAlert * failureAlert; 
@property (assign,nonatomic) BOOL hasLiveRouteSavingsSeconds; 
@property (assign,nonatomic) int liveRouteSavingsSeconds; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * trafficCameras; 
@property (nonatomic,readonly) BOOL hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache; 
@property (assign,nonatomic) BOOL hasIsOfflineResponse; 
@property (assign,nonatomic) BOOL isOfflineResponse; 
@property (nonatomic,readonly) BOOL hasSnapScoreMetadataDebug; 
@property (nonatomic,retain) GEOSnapScoreMetadata * snapScoreMetadataDebug; 
@property (assign,nonatomic) BOOL hasHasKhSegments; 
@property (assign,nonatomic) BOOL hasKhSegments; 
@property (nonatomic,readonly) BOOL hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,retain) NSMutableArray * arrivalParameters; 
@property (nonatomic,retain) NSMutableArray * trafficSignals; 
@property (nonatomic,readonly) BOOL hasTransitRouteUpdateConfiguration; 
@property (nonatomic,retain) GEOTransitRouteUpdateConfiguration * transitRouteUpdateConfiguration; 
@property (nonatomic,readonly) BOOL hasServiceVersion; 
@property (nonatomic,retain) NSString * serviceVersion; 
@property (nonatomic,readonly) BOOL hasDataVersion; 
@property (nonatomic,retain) NSString * dataVersion; 
@property (nonatomic,retain) NSMutableArray * suggestedRoutes; 
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed; 
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData; 
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeType;
+(Class)waypointRouteType;
+(Class)suggestedRouteType;
+(Class)serviceGapType;
+(Class)incidentsOffRoutesType;
+(Class)placeSearchResponseType;
+(Class)trafficSignalType;
+(Class)trafficCameraType;
+(BOOL)isValid:(id)arg1 ;
+(Class)arrivalParametersType;
+(Class)incidentsOnRoutesType;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)hasClientMetrics;
-(NSString *)debugData;
-(GEOProblemDetail*)problemDetails;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)clearLocations;
-(GEOClientMetrics *)clientMetrics;
-(void)setDebugData:(NSString *)arg1 ;
-(NSMutableArray *)trafficSignals;
-(NSData *)directionsResponseID;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(BOOL)hasEtaServiceSummary;
-(void)clearProblemDetails;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasDebugData;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(unsigned long long)problemDetailsCount;
-(NSString *)dataVersion;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(id)waypointRouteAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(BOOL)hasStyleAttributes;
-(BOOL)hasSessionState;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(void)setWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(void)setTrafficCameras:(NSMutableArray *)arg1 ;
-(unsigned)selectedRouteIndex;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsInstructionSignFillColor:(id)arg1 ;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setHasLocalDistanceUnits:(BOOL)arg1 ;
-(void)addServiceGap:(id)arg1 ;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(NSMutableArray *)routes;
-(unsigned long long)incidentsOffRoutesCount;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)debugLatencyMs;
-(BOOL)hasLocalDistanceUnits;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTransitRouteUpdateConfiguration;
-(void)clearServiceGaps;
-(BOOL)hasLiveRouteSavingsSeconds;
-(NSData *)sessionState;
-(BOOL)hasDecoderData;
-(void)addRoute:(id)arg1 ;
-(void)setHasIsNavigable:(BOOL)arg1 ;
-(void)clearTrafficCameras;
-(void)setStatus:(int)arg1 ;
-(void)addWaypointRoute:(id)arg1 ;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)clearSupportedTransportTypes;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasRouteDeviatesFromOriginal;
-(GEOTransitDecoderData *)decoderData;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)dealloc;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(int*)supportedTransportTypes;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsSupportedTransportTypes:(id)arg1 ;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)incidentsOnRoutes;
-(GEORouteDisplayHints *)displayHints;
-(void)clearArrivalParameters;
-(BOOL)hasSnapScoreMetadataDebug;
-(BOOL)hasTimepointUsed;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(void)clearTrafficSignals;
-(void)setHasRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(unsigned long long)trafficSignalsCount;
-(int)status;
-(void)setSessionState:(NSData *)arg1 ;
-(id)localDistanceUnitsAsString:(int)arg1 ;
-(int)liveRouteSavingsSeconds;
-(void)setHasHasKhSegments:(BOOL)arg1 ;
-(void)addSupportedTransportType:(int)arg1 ;
-(id)_geoTrafficSignals;
-(BOOL)hasDebugLatencyMs;
-(BOOL)hasDatasetAbStatus;
-(int)StringAsStatus:(id)arg1 ;
-(GEOTimepoint)timepointUsed;
-(BOOL)hasTransitDataVersion;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(void)setRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(BOOL)hasIsOfflineResponse;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceGaps;
-(void)addSuggestedRoute:(id)arg1 ;
-(BOOL)hasIsNavigable;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(id)init;
-(id)supportedTransportTypesAsString:(int)arg1 ;
-(BOOL)hasNonRecommendedRoutesCache;
-(GEOAlert *)failureAlert;
-(BOOL)hasDisplayHints;
-(void)setDataVersion:(NSString *)arg1 ;
-(void)setIsNavigable:(BOOL)arg1 ;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(NSData *)nonRecommendedRoutesCache;
-(int)StringAsLocalDistanceUnits:(id)arg1 ;
-(id)trafficCameraAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalParameters:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isNavigable;
-(void)setServiceVersion:(NSString *)arg1 ;
-(NSString *)serviceVersion;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(BOOL)routeDeviatesFromOriginal;
-(void)copyTo:(id)arg1 ;
-(int)localDistanceUnits;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addTrafficSignal:(id)arg1 ;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)supportedTransportTypesCount;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(unsigned long long)trafficCamerasCount;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(BOOL)hasInstructionSignFillColor;
-(PBUnknownFields *)unknownFields;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(id)instructionSignFillColorAsString:(int)arg1 ;
-(NSMutableArray *)suggestedRoutes;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasFailureAlert;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(void)clearRoutes;
-(void)setHasSelectedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasServiceVersion;
-(void)setHasInstructionSignFillColor:(BOOL)arg1 ;
-(BOOL)hasHasKhSegments;
-(id)initWithData:(id)arg1 ;
-(void)addTrafficCamera:(id)arg1 ;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(void)setFailureAlert:(GEOAlert *)arg1 ;
-(void)setHasIsOfflineResponse:(BOOL)arg1 ;
-(void)setHasLiveRouteSavingsSeconds:(BOOL)arg1 ;
-(void)setLiveRouteSavingsSeconds:(int)arg1 ;
-(BOOL)hasDataVersion;
-(void)setHasKhSegments:(BOOL)arg1 ;
-(unsigned long long)placeSearchResponsesCount;
-(NSMutableArray *)waypointRoutes;
-(unsigned long long)waypointRoutesCount;
-(NSMutableArray *)placeSearchResponses;
-(NSMutableArray *)arrivalParameters;
-(unsigned long long)incidentsOnRoutesCount;
-(unsigned long long)routesCount;
-(NSString *)transitDataVersion;
-(void)setSnapScoreMetadataDebug:(GEOSnapScoreMetadata *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(unsigned long long)arrivalParametersCount;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearWaypointRoutes;
-(GEOTransitRouteUpdateConfiguration *)transitRouteUpdateConfiguration;
-(BOOL)isOfflineResponse;
-(BOOL)hasKhSegments;
-(void)clearIncidentsOnRoutes;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(void)setTransitRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(BOOL)hasSelectedRouteIndex;
-(BOOL)hasTransitIncidentMessage;
-(int)instructionSignFillColor;
-(id)_geoTrafficCameras;
-(unsigned long long)suggestedRoutesCount;
-(void)clearSuggestedRoutes;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)serviceGapsCount;
-(NSMutableArray *)incidentsOffRoutes;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(NSString *)description;
-(void)clearIncidentsOffRoutes;
-(NSMutableArray *)trafficCameras;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)clearPlaceSearchResponses;
-(void)setIsOfflineResponse:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(GEOSnapScoreMetadata *)snapScoreMetadataDebug;
@end
