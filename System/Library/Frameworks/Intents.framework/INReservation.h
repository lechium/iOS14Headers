/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, NSDate, NSArray, NSURL, INDateComponentsRange;

@interface INReservation : NSObject <NSCopying, NSSecureCoding> {

	INSpeakableString* _itemReference;
	NSString* _reservationNumber;
	NSDate* _bookingTime;
	long long _reservationStatus;
	NSString* _reservationHolderName;
	NSArray* _actions;
	NSURL* _URL;
	INDateComponentsRange* __duration;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * _duration;              //@synthesize _duration=__duration - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * itemReference;              //@synthesize itemReference=_itemReference - In the implementation block
@property (nonatomic,copy,readonly) NSString * reservationNumber;                   //@synthesize reservationNumber=_reservationNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDate * bookingTime;                           //@synthesize bookingTime=_bookingTime - In the implementation block
@property (nonatomic,readonly) long long reservationStatus;                         //@synthesize reservationStatus=_reservationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * reservationHolderName;               //@synthesize reservationHolderName=_reservationHolderName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)actions;
-(NSURL *)URL;
-(NSDate *)bookingTime;
-(INSpeakableString *)itemReference;
-(INDateComponentsRange *)_duration;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reservationNumber;
-(long long)reservationStatus;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 ;
-(NSString *)reservationHolderName;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)description;
@end

