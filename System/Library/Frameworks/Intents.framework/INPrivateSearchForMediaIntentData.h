/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INPrivateMediaIntentData, NSArray, NSString;

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INPrivateMediaIntentData* _privateMediaIntentData;
	NSArray* _audioSearchResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INPrivateMediaIntentData * privateMediaIntentData;              //@synthesize privateMediaIntentData=_privateMediaIntentData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSearchResults;                                   //@synthesize audioSearchResults=_audioSearchResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INPrivateMediaIntentData *)privateMediaIntentData;
-(id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2 ;
-(id)initWithAudioSearchResults:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(NSArray *)audioSearchResults;
-(NSString *)description;
@end
