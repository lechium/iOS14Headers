/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSPredicate;

@interface PKAddressSearchRequest : NSObject {

	NSArray* _keysToFetch;
	/*^block*/id _contactFilter;
	NSString* _outputKey;
	long long _type;
	NSString* _fragment;
	NSPredicate* _predicate;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * fragment;                    //@synthesize fragment=_fragment - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,copy) id contactFilter;                       //@synthesize contactFilter=_contactFilter - In the implementation block
@property (nonatomic,retain) NSString * outputKey;                 //@synthesize outputKey=_outputKey - In the implementation block
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)contactKeys;
-(id)postalAddressKeys;
-(/*^block*/id)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2 ;
-(id)initWithFullText:(id)arg1 ;
-(id)initWithNameComponents:(id)arg1 ;
-(id)contactFilter;
-(void)setContactFilter:(id)arg1 ;
-(void)setOutputKey:(NSString *)arg1 ;
-(long long)type;
-(NSPredicate *)predicate;
-(void)setFragment:(NSString *)arg1 ;
-(id)allKeys;
-(NSString *)outputKey;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)fragment;
-(id)initWithPostalAddress:(id)arg1 ;
@end
