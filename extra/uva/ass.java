button.setOnClickListener(new View.OnClickListener() {
            static int interval;
            static Timer timer;
            @Override
            public void onClick(View view) {

                AlertDialog.Builder builder = new AlertDialog.Builder(temp_read.this);
                builder.setMessage(R.string.game_message);
                final AlertDialog game_message = builder.create();
                game_message.show();


                timer = new Timer();

                interval = Integer.parseInt(5);
                game_message.setMessage(interval);
                timer.scheduleAtFixedRate(new TimerTask() {

                    public void run() {

                        game_message.setMessage(setInterval());

                    }

                }, 1000,1000);
                try{
                    TimeUnit.SECONDS.sleep(5);
                }
                catch(Exception e){
                    System.out.println("lkdjflsk");
                }
                game_message.dismiss();

            }

            private static final int setInterval() {
                if (interval == 1)
                    timer.cancel();
                return --interval;
            }




        });