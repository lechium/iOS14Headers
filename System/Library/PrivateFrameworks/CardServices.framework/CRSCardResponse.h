/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardServices/CRSResponse.h>

@protocol CRCard;
@class CRSCardRequest;

@interface CRSCardResponse : CRSResponse {

	CRSCardRequest* _request;
	id<CRCard> _card;

}

@property (nonatomic,retain) CRSCardRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<CRCard> card;                       //@synthesize card=_card - In the implementation block
-(id<CRCard>)card;
-(void)setCard:(id<CRCard>)arg1 ;
-(CRSCardRequest *)request;
-(void)setRequest:(CRSCardRequest *)arg1 ;
@end
