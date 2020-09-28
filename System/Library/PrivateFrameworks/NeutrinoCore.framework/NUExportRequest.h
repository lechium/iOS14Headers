/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NSURL;

@interface NUExportRequest : NURenderRequest {

	NSURL* _destinationURL;
	id<NUScalePolicy> _scalePolicy;

}

@property (copy) NSURL * destinationURL;                       //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(id)initWithComposition:(id)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(id)initWithComposition:(id)arg1 destinationURL:(id)arg2 ;
@end
