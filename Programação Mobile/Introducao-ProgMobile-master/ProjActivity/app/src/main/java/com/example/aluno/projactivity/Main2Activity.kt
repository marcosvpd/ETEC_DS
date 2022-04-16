package com.example.aluno.projactivity

import android.os.Bundle
import android.support.design.widget.Snackbar
import android.support.v7.app.AppCompatActivity
import android.util.Log

import kotlinx.android.synthetic.main.activity_main2.*

class Main2Activity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        Log.i(  "MainActivity",  ">>>On Create Rodou...")
        Log.i(  "MainActivity",  ">>>On Create Rodou...")
        Log.i(  "MainActivity",  ">>>On Create Rodou...")
        Log.i(  "MainActivity",  ">>>On Create Rodou...")



        setContentView(R.layout.activity_main2)
        setSupportActionBar(toolbar)

        fab.setOnClickListener { view ->
            Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
                    .setAction("Action", null).show()
        }
    }

    override fun onResume() {
        super.onResume()
        Log.i(  "MainActivity",  ">>>On Resume Rodou...")
        Log.i(  "MainActivity",  ">>>On Resume Rodou...")
        Log.i(  "MainActivity",  ">>>On Resume Rodou...")
        Log.i(  "MainActivity",  ">>>On Resume Rodou...")
    }

    override fun onPause() {
        super.onPause()

        Log.i(  "MainActivity",  ">>>On Pause Rodou...")
        Log.i(  "MainActivity",  ">>>On Pause Rodou...")
        Log.i(  "MainActivity",  ">>>On Pause Rodou...")
        Log.i(  "MainActivity",  ">>>On Pause Rodou...")

    }

    override fun onRestart() {
        super.onRestart()
        Log.i(  "MainActivity",  ">>>On Restart Rodou...")
        Log.i(  "MainActivity",  ">>>On Restart Rodou...")
        Log.i(  "MainActivity",  ">>>On Restart Rodou...")
        Log.i(  "MainActivity",  ">>>On Restart Rodou...")
    }

    override fun onStart() {
        super.onStart()
        Log.i(  "MainActivity",  ">>>On Start Rodou...")
        Log.i(  "MainActivity",  ">>>On Start Rodou...")
        Log.i(  "MainActivity",  ">>>On Start Rodou...")
        Log.i(  "MainActivity",  ">>>On Start Rodou...")
    }

    override fun onDestroy() {
        super.onDestroy()
        Log.i(  "MainActivity",  ">>>On Destroy Rodou...")
        Log.i(  "MainActivity",  ">>>On Destroy Rodou...")
        Log.i(  "MainActivity",  ">>>On Destroy Rodou...")
        Log.i(  "MainActivity",  ">>>On Destroy Rodou...")
    }


}
