/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd {

	BOOL enable;
	BOOL onetimeonly;
	NSString* trigger;
	SALocation* location;
	SAPerson* saPerson;
	NSString* fenceType;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) BOOL onetimeonly; 
@property (nonatomic,copy) NSString * trigger; 
@property (nonatomic,copy) SALocation * location; 
@property (nonatomic,retain) SAPerson * saPerson; 
@property (nonatomic,copy) NSString * fenceType; 
+(id)bundle;
-(BOOL)enable;
-(id)addressString;
-(id)path;
-(NSString *)fenceType;
-(NSString *)trigger;
-(id)result;
-(SALocation *)location;
-(void)setFenceType:(NSString *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setEnable:(BOOL)arg1 ;
-(id)allHandles;
-(void)setTrigger:(NSString *)arg1 ;
-(id)jsonBodyDictionary;
-(void)setSaPerson:(SAPerson *)arg1 ;
-(void)setOnetimeonly:(BOOL)arg1 ;
-(id)requestedLocationDictionary;
-(id)fullAddressDictionaryForSALocation:(id)arg1 ;
-(SAPerson *)saPerson;
-(id)postalAddressWithSALocation:(id)arg1 ;
-(BOOL)onetimeonly;
@end
