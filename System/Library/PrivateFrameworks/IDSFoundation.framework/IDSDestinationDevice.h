/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination {

	IDSURI* _destinationURI;
	BOOL _isGuest;

}

@property (nonatomic,retain) IDSURI * destinationURI;              //@synthesize destinationURI=_destinationURI - In the implementation block
@property (assign,nonatomic) BOOL isGuest;                         //@synthesize isGuest=_isGuest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isDeviceURI:(id)arg1 ;
-(void)setIsGuest:(BOOL)arg1 ;
-(id)initWithURI:(id)arg1 isGuest:(BOOL)arg2 ;
-(IDSURI *)destinationURI;
-(void)setDestinationURI:(IDSURI *)arg1 ;
-(id)groupID;
-(BOOL)isDevice;
-(id)initWithDeviceURI:(id)arg1 ;
-(id)initWithIDSDeviceURI:(id)arg1 ;
-(id)initWithRapportPublicIdentifierURI:(id)arg1 ;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isGuest;
@end
