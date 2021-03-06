/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NWNetworkDescription, NSArray, NWEndpoint, NWParameters, NWPathEvaluator, NSUUID, NSURL, NWInterface, NSString;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate> {

	unsigned _mID;
	long long _status;
	NWNetworkDescription* _bestAvailableNetworkDescription;
	NSArray* _networkDescriptionArray;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NWPathEvaluator* _pathEvaluator;
	NSUUID* _lastProbeUUID;
	NSURL* _lastProbeURL;
	NWInterface* _interface;

}

@property (assign) long long status;                                                    //@synthesize status=_status - In the implementation block
@property (retain) NWNetworkDescription * bestAvailableNetworkDescription;              //@synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription - In the implementation block
@property (retain) NSArray * networkDescriptionArray;                                   //@synthesize networkDescriptionArray=_networkDescriptionArray - In the implementation block
@property (retain) NWParameters * parameters;                                           //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NWPathEvaluator * pathEvaluator;                                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (retain) NSUUID * lastProbeUUID;                                              //@synthesize lastProbeUUID=_lastProbeUUID - In the implementation block
@property (retain) NSURL * lastProbeURL;                                                //@synthesize lastProbeURL=_lastProbeURL - In the implementation block
@property (retain) NWInterface * interface;                                             //@synthesize interface=_interface - In the implementation block
@property (assign) unsigned mID;                                                        //@synthesize mID=_mID - In the implementation block
@property (nonatomic,readonly) NSString * privateDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)mainOperationQueue;
+(void)saveMonitor:(id)arg1 ;
+(id)queue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWParameters *)parameters;
-(NWPathEvaluator *)pathEvaluator;
-(void)setLastProbeURL:(NSURL *)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(NWEndpoint *)endpoint;
-(void)setStatus:(long long)arg1 ;
-(NSURL *)lastProbeURL;
-(NWInterface *)interface;
-(void)dealloc;
-(void)setInterface:(NWInterface *)arg1 ;
-(NSArray *)networkDescriptionArray;
-(long long)status;
-(NWNetworkDescription *)bestAvailableNetworkDescription;
-(void)setBestAvailableNetworkDescription:(NWNetworkDescription *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned)mID;
-(void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(NSUUID *)lastProbeUUID;
-(BOOL)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(void)setNetworkDescriptionArray:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(void)setMID:(unsigned)arg1 ;
-(NSString *)description;
-(void)setLastProbeUUID:(NSUUID *)arg1 ;
@end

