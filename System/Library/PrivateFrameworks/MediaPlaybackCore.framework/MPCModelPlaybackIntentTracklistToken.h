/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;

}

@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requiredPropertiesForStaticMediaClips;
-(MPIdentifierSet *)startItemIdentifiers;
-(MPModelRequest *)request;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
@end

