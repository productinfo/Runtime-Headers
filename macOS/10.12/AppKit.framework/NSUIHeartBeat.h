/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSUIHeartBeat : NSObject {
    NSLock * _blockLock;
    NSMutableSet * _clients;
    NSLock * _clientsLock;
    NSView * _currentView;
    NSLock * _drawingThreadLock;
    struct { 
        unsigned int _isDrawingLocked : 1; 
        unsigned int _isClientsChanged : 1; 
        unsigned int _lockedByClient : 1; 
        unsigned int _sessionIsActive : 1; 
        unsigned int _registeredForNotifications : 1; 
        unsigned int _pendingClientUnlock : 1; 
        unsigned int _queueState : 2; 
        unsigned int _reserved : 24; 
    }  _hbFlags;
    NSThread * _heartBeatThread;
    struct { 
        double _currentDate; 
        double _birthDate; 
        double _lastDate; 
        struct { 
            unsigned int _skipped : 1; 
            unsigned int _reserved : 31; 
        } _flags; 
    }  _times;
}

+ (double)heartBeatCycle;
+ (void)initialize;
+ (BOOL)isHeartBeatThread;
+ (void)setHeartBeatCycle:(double)arg1;
+ (id)sharedHeartBeat;

- (double)_currentFrameTime;
- (void)_heartBeatThread:(id)arg1;
- (BOOL)_isBlocked;
- (BOOL)_isSpinning;
- (void)_registerForSessionNotifications;
- (void)_sessionDidBecomeActive;
- (void)_sessionDidResignActive;
- (double)_startFrameTime;
- (void)_unregisterForSessionNotifications;
- (void)addHeartBeatView:(id)arg1;
- (double)birthDate;
- (void)dealloc;
- (void)disableHeartBeating;
- (id)init;
- (BOOL)lockFocusForView:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 needsTranslation:(BOOL)arg3;
- (void)reenableHeartBeating:(BOOL)arg1;
- (void)removeHeartBeatView:(id)arg1;
- (void)unlockFocusInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateHeartBeatState;

@end
