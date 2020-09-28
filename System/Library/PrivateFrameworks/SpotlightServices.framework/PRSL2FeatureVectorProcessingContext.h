/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSL2FeatureVectorProcessingContext : NSObject {

	unsigned short* _expandedFeatureExecutionOrder;
	unsigned long long _expandedFeatureCount;

}

@property (assign,nonatomic) unsigned short* expandedFeatureExecutionOrder;              //@synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder - In the implementation block
@property (assign,nonatomic) unsigned long long expandedFeatureCount;                    //@synthesize expandedFeatureCount=_expandedFeatureCount - In the implementation block
-(void)setExpandedFeatureExecutionOrder:(unsigned short*)arg1 ;
-(unsigned long long)expandedFeatureCount;
-(void)dealloc;
-(id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3 ;
-(unsigned short*)expandedFeatureExecutionOrder;
-(void)setExpandedFeatureCount:(unsigned long long)arg1 ;
@end
