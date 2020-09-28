/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFLocationQuery.h>

@class WFResponse, WFTaskIdentifier, MKLocalSearchCompletion, NSString, CLGeocoder, MKLocalSearch;

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery> {

	BOOL _finished;
	WFTaskIdentifier* identifier;
	MKLocalSearchCompletion* _searchCompletion;
	NSString* _searchString;
	/*^block*/id _resultHandler;
	WFResponse* _response;
	CLGeocoder* _reverseGeocoder;
	MKLocalSearch* _search;
	CLLocationCoordinate2D _searchCoordinate;
	CLLocationCoordinate2D _unshiftedCoordinate;

}

@property (copy) id resultHandler;                                                    //@synthesize resultHandler=_resultHandler - In the implementation block
@property (retain) WFResponse * response;                                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) CLGeocoder * reverseGeocoder;                            //@synthesize reverseGeocoder=_reverseGeocoder - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                                  //@synthesize search=_search - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D searchCoordinate;                 //@synthesize searchCoordinate=_searchCoordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D unshiftedCoordinate;              //@synthesize unshiftedCoordinate=_unshiftedCoordinate - In the implementation block
@property (readonly) MKLocalSearchCompletion * searchCompletion;                      //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (readonly) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (retain) WFTaskIdentifier * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)clReverseGeocoderCache;
+(id)queryWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)invalidateCaches;
+(id)mkLocalSearchGeoCodeCache;
+(id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)queryWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(CLGeocoder *)reverseGeocoder;
-(WFTaskIdentifier *)identifier;
-(void)setResponse:(WFResponse *)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setResultHandler:(id)arg1 ;
-(void)_startCLGeocoderReverseGeo;
-(void)setSearchCoordinate:(CLLocationCoordinate2D)arg1 ;
-(MKLocalSearchCompletion *)searchCompletion;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleSearchResponseWithLocation:(id)arg1 ;
-(void)setIdentifier:(WFTaskIdentifier *)arg1 ;
-(NSString *)searchString;
-(void)setReverseGeocoder:(CLGeocoder *)arg1 ;
-(id)_reverseGeocoderLocation;
-(void)start;
-(MKLocalSearch *)search;
-(void)_startMKLocalSearch;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(id)_mkLocalSearchRequest;
-(CLLocationCoordinate2D)searchCoordinate;
-(void)setUnshiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(WFResponse *)response;
-(id)resultHandler;
-(CLLocationCoordinate2D)unshiftedCoordinate;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_handleErrorResponse:(id)arg1 ;
@end
