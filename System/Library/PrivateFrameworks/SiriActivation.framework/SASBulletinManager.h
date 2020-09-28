/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol SASBulletinManagerDelegate;
@class BBObserver, SASBulletinCache, NSMutableDictionary, NSString;

@interface SASBulletinManager : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	SASBulletinCache* _bulletinCache;
	NSMutableDictionary* _bulletinsOnLockScreen;
	id<SASBulletinManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SASBulletinManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupObserver;
-(id)allBulletins;
-(id)bulletinsOnLockScreen;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(id)_displayNameForBulletin:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)setDelegate:(id<SASBulletinManagerDelegate>)arg1 ;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)modifyBulletinCompletionWithBulletin:(id)arg1 ;
-(void)_bulletinsDidChange;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(id<SASBulletinManagerDelegate>)delegate;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
@end
