/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MDLProbeCluster : NSObject {

	NSMutableSet* _probes;
	 _centroid;

}

@property (assign)  centroid;                          //@synthesize centroid=_centroid - In the implementation block
@property (retain) NSMutableSet * probes;              //@synthesize probes=_probes - In the implementation block
-()centroid;
-(void)setCentroid:;
-(NSMutableSet *)probes;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)hash;
-(BOOL)isEqualToCluster:(id)arg1 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg1 ;
-(void)setProbes:(NSMutableSet *)arg1 ;
@end
