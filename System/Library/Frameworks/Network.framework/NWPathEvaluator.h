/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path_evaluator;
@class NWEndpoint, NSObject, NWPath, NWParameters;

@interface NWPathEvaluator : NSObject {

	NWEndpoint* _endpoint;
	NSObject*<OS_nw_path_evaluator> _internalEvaluator;
	NWPath* _internalPath;
	NWParameters* _parameters;

}

@property (readonly) NSObject*<OS_nw_path_evaluator> internalEvaluator;              //@synthesize internalEvaluator=_internalEvaluator - In the implementation block
@property (retain) NWPath * internalPath;                                            //@synthesize internalPath=_internalPath - In the implementation block
@property (readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NWPath * path; 
@property (nonatomic,readonly) NWEndpoint * endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
+(id)wf_pathEvaluatorForURL:(id)arg1 ;
+(void)initialize;
+(id)sharedDefaultEvaluator;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)savePathEvaluator:(id)arg1 ;
+(id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2 ;
-(BOOL)wf_isReachable;
-(NWParameters *)parameters;
-(NWPath *)path;
-(NWEndpoint *)endpoint;
-(void)dealloc;
-(NWPath *)internalPath;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInternalPath:(NWPath *)arg1 ;
-(id)copyPath;
-(unsigned long long)hash;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(id)initWithEvaluator:(id)arg1 parameters:(id)arg2 ;
-(id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2 ;
-(id)initWithListenParameters:(id)arg1 ;
-(void)satisfyPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerPathAgentsIncludingVoluntary:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requestNexus;
-(BOOL)matchesEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSObject*<OS_nw_path_evaluator>)internalEvaluator;
@end
